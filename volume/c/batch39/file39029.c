// fichero 39029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39029;

Registro39029 crear_registro39029(int id) {
    Registro39029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
