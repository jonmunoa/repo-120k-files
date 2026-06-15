// fichero 16725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16725;

Registro16725 crear_registro16725(int id) {
    Registro16725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
