// fichero 14629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14629;

Registro14629 crear_registro14629(int id) {
    Registro14629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
