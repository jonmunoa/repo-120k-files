// fichero 42661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42661;

Registro42661 crear_registro42661(int id) {
    Registro42661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
