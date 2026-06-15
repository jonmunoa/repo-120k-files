// fichero 39449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39449;

Registro39449 crear_registro39449(int id) {
    Registro39449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
