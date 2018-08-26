arg="${1}"

if [[ -f a.out ]]; then
	rm a.out
	#echo "removed executable file"
fi

case ${arg} in
	"")
	echo "Filename cannot be NULL or Empty."
	exit 1
	;;
	*.cc | *.cpp)
	g++ -std=c++14 ${arg}
	;;
	*.c)
	gcc ${arg}
	;;
	*.py)
	python ${arg}
	exit 0
	;;
	*.java)
	javac ${arg}
	exit 0
	;;
	*)
	echo "File Type not Known. Please compile manually."
	exit 1
	;;
esac

exit_code=$?

if [[ ${exit_code} -eq 0 ]]; then
	./a.out
fi