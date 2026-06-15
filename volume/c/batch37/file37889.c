// fichero 37889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37889;

Registro37889 crear_registro37889(int id) {
    Registro37889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
