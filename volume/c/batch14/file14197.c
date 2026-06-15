// fichero 14197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14197;

Registro14197 crear_registro14197(int id) {
    Registro14197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
