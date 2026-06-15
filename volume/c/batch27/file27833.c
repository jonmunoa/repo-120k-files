// fichero 27833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27833;

Registro27833 crear_registro27833(int id) {
    Registro27833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
