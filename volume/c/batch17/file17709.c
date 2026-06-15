// fichero 17709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17709;

Registro17709 crear_registro17709(int id) {
    Registro17709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
