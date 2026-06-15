// fichero 29589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29589;

Registro29589 crear_registro29589(int id) {
    Registro29589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
