// fichero 561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro561;

Registro561 crear_registro561(int id) {
    Registro561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
