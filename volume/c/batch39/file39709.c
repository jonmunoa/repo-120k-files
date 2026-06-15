// fichero 39709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39709;

Registro39709 crear_registro39709(int id) {
    Registro39709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
