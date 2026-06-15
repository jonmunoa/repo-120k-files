// fichero 42573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42573;

Registro42573 crear_registro42573(int id) {
    Registro42573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
