// fichero 29305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29305;

Registro29305 crear_registro29305(int id) {
    Registro29305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
