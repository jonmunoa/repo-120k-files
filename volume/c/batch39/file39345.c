// fichero 39345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39345;

Registro39345 crear_registro39345(int id) {
    Registro39345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
