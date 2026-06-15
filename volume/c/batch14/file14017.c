// fichero 14017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14017;

Registro14017 crear_registro14017(int id) {
    Registro14017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
