// fichero 48013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48013;

Registro48013 crear_registro48013(int id) {
    Registro48013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
