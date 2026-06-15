// fichero 37265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37265;

Registro37265 crear_registro37265(int id) {
    Registro37265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
