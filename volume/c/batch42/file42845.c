// fichero 42845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42845;

Registro42845 crear_registro42845(int id) {
    Registro42845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
