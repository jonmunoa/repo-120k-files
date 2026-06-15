// fichero 30889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30889;

Registro30889 crear_registro30889(int id) {
    Registro30889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
