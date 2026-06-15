// fichero 3349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3349;

Registro3349 crear_registro3349(int id) {
    Registro3349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
