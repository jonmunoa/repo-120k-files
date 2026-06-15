// fichero 42765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42765;

Registro42765 crear_registro42765(int id) {
    Registro42765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
