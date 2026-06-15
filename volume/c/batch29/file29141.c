// fichero 29141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29141;

Registro29141 crear_registro29141(int id) {
    Registro29141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
