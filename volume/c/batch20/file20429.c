// fichero 20429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20429;

Registro20429 crear_registro20429(int id) {
    Registro20429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
