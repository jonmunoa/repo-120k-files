// fichero 42429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42429;

Registro42429 crear_registro42429(int id) {
    Registro42429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
