// fichero 29473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29473;

Registro29473 crear_registro29473(int id) {
    Registro29473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
