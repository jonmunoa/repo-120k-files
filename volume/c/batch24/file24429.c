// fichero 24429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24429;

Registro24429 crear_registro24429(int id) {
    Registro24429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
