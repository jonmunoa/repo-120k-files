// fichero 2709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2709;

Registro2709 crear_registro2709(int id) {
    Registro2709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
