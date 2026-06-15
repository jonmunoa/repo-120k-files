// fichero 48709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48709;

Registro48709 crear_registro48709(int id) {
    Registro48709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
