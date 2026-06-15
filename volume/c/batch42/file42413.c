// fichero 42413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42413;

Registro42413 crear_registro42413(int id) {
    Registro42413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
