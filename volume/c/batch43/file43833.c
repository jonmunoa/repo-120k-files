// fichero 43833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43833;

Registro43833 crear_registro43833(int id) {
    Registro43833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
