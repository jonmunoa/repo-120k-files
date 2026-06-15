// fichero 39349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39349;

Registro39349 crear_registro39349(int id) {
    Registro39349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
