// fichero 26937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26937;

Registro26937 crear_registro26937(int id) {
    Registro26937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
