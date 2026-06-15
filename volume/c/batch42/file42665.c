// fichero 42665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42665;

Registro42665 crear_registro42665(int id) {
    Registro42665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
