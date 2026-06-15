// fichero 42085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42085;

Registro42085 crear_registro42085(int id) {
    Registro42085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
