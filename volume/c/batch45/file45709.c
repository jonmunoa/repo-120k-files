// fichero 45709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45709;

Registro45709 crear_registro45709(int id) {
    Registro45709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
