// fichero 29253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29253;

Registro29253 crear_registro29253(int id) {
    Registro29253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
