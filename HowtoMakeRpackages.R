#How to make an R package
#by: MaryKBrady

###
# FIRST, PREP YOUR R SCRIPTS
###

#each function needs to be in its own .R file (even if the function calls other functions that are in the package)
#code should have at least some comments to help people looking at the code understand what is happening

#each file should have a section at the top of the code that will form the function help page. 
#It should contain the following (with the #'):

#' Title
#' 
#' description of function. Can be multiple lines in the code but it will be all one block on the help 
#' page. I don't know how to have it make two paragraphs. This will be the blurb that comes up when you type
#' in the function name after the package is all set to go
#' 
#' details if you want more space than just the description. If you need to cite anything, this is a good place
#' If you don't want this section, just leave one empty line (with #') after description then go into @param things
#' 
#' @param x parameter description
#' @param y have one for every parameter in your function
#' @return description for what the function returns
#' @author your name here
#' @seealso \code{\link{other function in the package}} #optional but helpful if you have related functions
                                                        #separate multiple with comma: \code{{}}, \code{{}} 
#' @keywords not necessary but can be helpful for folks
#' @examples 
#' examples here
#' examples can be multiple lines and will print out as multiple lines in the help doc
#' @export #you have to have this line

#after this header section, the only thing in the .R file should be 
#the function: functionName <- function(x, y){all the interesting stuff here}

###
# NOW, MAKE THE PACKAGE
###

#you need this package (well actually, you don't, but it makes it WAY easier):
#install.packages("roxygen2")

#remember, all functions need to be in their own r script file
#put all function r scripts in a folder with no other .R files 
code_files <- normalizePath(list.files(path="path to folder with .R files",pattern=".R", full.names=T))

#is that everything?
code_files

#set wd somewhere easy to get to - desktop perhaps? 
#- you'll need the file path a few times later so it is nice to have it short but live your best life
setwd("Where the package directory will be made")

#make package skeleton
package.skeleton(name="PackageName", code_files=code_files)

#now there should be a new folder called PackageName in your working directory

#(read and) delete the "read and delete me" file in your new package directory

#fill out the description file
  #probably a GPL-2 license, look it up if you want but generally free use and 
      #modification, published modifications must have the modifier's name to keep things clear
  #add a line that says "Encoding: UTF-8
#you can also add a line Depends: and list any packages needed in your package (they will then install with
#your package if the user does not already have them)

#delete all files in the man folder
#delete NAMESPACE file
#the premade man and namespace files cannot be changed by roxygen. You only have to do this once
#roxygen can, and will, change the files after this as appropriate

roxygen2::roxygenise(package.dir="Path to package directory (hint: should end with the package name)")
#package made! address any errors

detach("package:PackageName",unload=TRUE) #to ensure clean installation
#detach, then roxygenize, then detach, then re-install any time that you make a change to the package directory

install.packages(
  pkgs="Path to package directory",
  repos=NULL,
  type="source"
)
#If you get a lazy-load error, restart RStudio and try installing again. I don't know why that happens sometimes

#Does it load?
library(PackageName)

#test a function help page
?OneofYourFunctions

#As before, if you get a lazy-load error, restart RStudio and try installing again. I don't know why it happens
#If your See Also links are not working but you can see the text of the link, restart RStudio
#If you don't get the autofill bubble coming up when you type function names, it'll be there if you restart RStudio
#If it says "rendering development documentation" when you call a help page, it won't after you restart RStudio
#Are you sensing a theme yet? If anything weird happens, just restart RStudio

#To add the test data set:
#Make a folder in your package directory called "inst"
#then make another folder inside that called "external"
#Place the example data files in external

#detach then re-install and library package 

#your example data files are now available at: dir(path=system.file("external",package="PackageName"))
  #or: file.path(system.file("external",package="PackageName")) to get the file path
#on any computer where the package is installed
#this lets you call the data in your example cases in the help pages for each function
#example: inputFile <- read.csv(file.path(system.file("external", package="SheFire"),"WalkerPlot4NE.csv"))

#test one of your examples for a function that uses the example data
#does it get pulled in as you expected? It should

#You're now all set to go, more or less. Have fun :)

