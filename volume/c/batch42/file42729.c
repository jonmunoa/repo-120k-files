// fichero 42729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42729;

Registro42729 crear_registro42729(int id) {
    Registro42729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
