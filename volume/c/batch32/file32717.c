// fichero 32717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32717;

Registro32717 crear_registro32717(int id) {
    Registro32717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
