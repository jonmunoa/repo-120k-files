// fichero 14097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14097;

Registro14097 crear_registro14097(int id) {
    Registro14097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
