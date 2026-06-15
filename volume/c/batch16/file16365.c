// fichero 16365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16365;

Registro16365 crear_registro16365(int id) {
    Registro16365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
