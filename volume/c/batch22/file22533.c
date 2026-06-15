// fichero 22533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22533;

Registro22533 crear_registro22533(int id) {
    Registro22533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
