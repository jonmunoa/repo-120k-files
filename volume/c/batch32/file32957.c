// fichero 32957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32957;

Registro32957 crear_registro32957(int id) {
    Registro32957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
