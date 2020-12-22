templateDir = C:\Users\Lee\projects\file prep template\.vscode
#properties = c_cpp_properties.json
#launch = launch.json
#tasks = tasks.json

#prompt user for directory
#positional arguments: first should be the desired place to put new vscode folder
#user runs this by typing "prepEnv.sh $pwd appname"


#copy template files
cp -r templateDir $0

templateFiles = ls templateDir

for file in templateFiles
do
	sed -i "s/%APPNAME%/$1/"
	#replace a value with a given value
done
