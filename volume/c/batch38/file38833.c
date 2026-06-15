// fichero 38833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38833;

Registro38833 crear_registro38833(int id) {
    Registro38833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
