// fichero 29237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29237;

Registro29237 crear_registro29237(int id) {
    Registro29237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
