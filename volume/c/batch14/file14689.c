// fichero 14689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14689;

Registro14689 crear_registro14689(int id) {
    Registro14689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
