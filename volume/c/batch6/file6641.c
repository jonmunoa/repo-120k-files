// fichero 6641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6641;

Registro6641 crear_registro6641(int id) {
    Registro6641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
