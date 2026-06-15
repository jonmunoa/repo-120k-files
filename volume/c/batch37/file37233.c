// fichero 37233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37233;

Registro37233 crear_registro37233(int id) {
    Registro37233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
