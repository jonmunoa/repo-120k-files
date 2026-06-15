// fichero 27429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27429;

Registro27429 crear_registro27429(int id) {
    Registro27429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
