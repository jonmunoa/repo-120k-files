// fichero 6473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6473;

Registro6473 crear_registro6473(int id) {
    Registro6473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
