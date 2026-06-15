// fichero 4709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4709;

Registro4709 crear_registro4709(int id) {
    Registro4709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
