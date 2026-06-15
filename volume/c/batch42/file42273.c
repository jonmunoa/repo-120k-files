// fichero 42273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42273;

Registro42273 crear_registro42273(int id) {
    Registro42273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
