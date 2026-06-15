// fichero 14825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14825;

Registro14825 crear_registro14825(int id) {
    Registro14825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
