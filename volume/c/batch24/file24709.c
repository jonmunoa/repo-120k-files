// fichero 24709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24709;

Registro24709 crear_registro24709(int id) {
    Registro24709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
