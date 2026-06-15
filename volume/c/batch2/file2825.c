// fichero 2825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2825;

Registro2825 crear_registro2825(int id) {
    Registro2825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
