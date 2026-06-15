// fichero 14717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14717;

Registro14717 crear_registro14717(int id) {
    Registro14717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
