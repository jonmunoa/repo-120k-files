// fichero 45029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45029;

Registro45029 crear_registro45029(int id) {
    Registro45029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
