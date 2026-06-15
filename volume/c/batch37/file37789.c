// fichero 37789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37789;

Registro37789 crear_registro37789(int id) {
    Registro37789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
