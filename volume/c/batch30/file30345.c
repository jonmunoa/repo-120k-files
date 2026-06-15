// fichero 30345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30345;

Registro30345 crear_registro30345(int id) {
    Registro30345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
