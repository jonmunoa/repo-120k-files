// fichero 28889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28889;

Registro28889 crear_registro28889(int id) {
    Registro28889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
