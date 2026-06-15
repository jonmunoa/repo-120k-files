// fichero 29269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29269;

Registro29269 crear_registro29269(int id) {
    Registro29269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
