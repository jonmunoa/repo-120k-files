// fichero 29413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29413;

Registro29413 crear_registro29413(int id) {
    Registro29413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
