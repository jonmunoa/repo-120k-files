// fichero 29349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29349;

Registro29349 crear_registro29349(int id) {
    Registro29349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
