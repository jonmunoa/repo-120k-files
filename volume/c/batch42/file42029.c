// fichero 42029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42029;

Registro42029 crear_registro42029(int id) {
    Registro42029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
