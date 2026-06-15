// fichero 37641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37641;

Registro37641 crear_registro37641(int id) {
    Registro37641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
