// fichero 42725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42725;

Registro42725 crear_registro42725(int id) {
    Registro42725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
