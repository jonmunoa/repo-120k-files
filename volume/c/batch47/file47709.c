// fichero 47709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47709;

Registro47709 crear_registro47709(int id) {
    Registro47709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
