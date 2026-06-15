// fichero 825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro825;

Registro825 crear_registro825(int id) {
    Registro825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
