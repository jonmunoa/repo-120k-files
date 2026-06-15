// fichero 37065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37065;

Registro37065 crear_registro37065(int id) {
    Registro37065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
