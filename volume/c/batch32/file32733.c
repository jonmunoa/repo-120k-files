// fichero 32733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32733;

Registro32733 crear_registro32733(int id) {
    Registro32733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
