// fichero 29625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29625;

Registro29625 crear_registro29625(int id) {
    Registro29625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
