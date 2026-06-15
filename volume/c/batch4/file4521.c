// fichero 4521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4521;

Registro4521 crear_registro4521(int id) {
    Registro4521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
