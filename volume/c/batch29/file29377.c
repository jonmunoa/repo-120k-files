// fichero 29377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29377;

Registro29377 crear_registro29377(int id) {
    Registro29377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
