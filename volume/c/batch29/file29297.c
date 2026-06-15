// fichero 29297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29297;

Registro29297 crear_registro29297(int id) {
    Registro29297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
