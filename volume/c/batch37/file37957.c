// fichero 37957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37957;

Registro37957 crear_registro37957(int id) {
    Registro37957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
