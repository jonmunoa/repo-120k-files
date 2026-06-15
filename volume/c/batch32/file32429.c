// fichero 32429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32429;

Registro32429 crear_registro32429(int id) {
    Registro32429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
