// fichero 32825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32825;

Registro32825 crear_registro32825(int id) {
    Registro32825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
