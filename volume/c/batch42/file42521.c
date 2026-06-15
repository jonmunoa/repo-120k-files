// fichero 42521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42521;

Registro42521 crear_registro42521(int id) {
    Registro42521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
