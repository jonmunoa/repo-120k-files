// fichero 37185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37185;

Registro37185 crear_registro37185(int id) {
    Registro37185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
