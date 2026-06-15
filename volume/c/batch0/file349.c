// fichero 349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro349;

Registro349 crear_registro349(int id) {
    Registro349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
