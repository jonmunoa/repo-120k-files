// fichero 42145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42145;

Registro42145 crear_registro42145(int id) {
    Registro42145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
