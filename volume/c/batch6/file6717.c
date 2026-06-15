// fichero 6717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6717;

Registro6717 crear_registro6717(int id) {
    Registro6717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
