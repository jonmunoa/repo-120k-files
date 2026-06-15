// fichero 21601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21601;

Registro21601 crear_registro21601(int id) {
    Registro21601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
