// fichero 16481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16481;

Registro16481 crear_registro16481(int id) {
    Registro16481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
