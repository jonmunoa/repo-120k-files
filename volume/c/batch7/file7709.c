// fichero 7709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7709;

Registro7709 crear_registro7709(int id) {
    Registro7709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
