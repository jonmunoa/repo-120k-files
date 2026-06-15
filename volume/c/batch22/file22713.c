// fichero 22713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22713;

Registro22713 crear_registro22713(int id) {
    Registro22713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
