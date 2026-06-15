// fichero 42133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42133;

Registro42133 crear_registro42133(int id) {
    Registro42133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
