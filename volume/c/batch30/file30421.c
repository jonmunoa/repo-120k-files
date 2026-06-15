// fichero 30421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30421;

Registro30421 crear_registro30421(int id) {
    Registro30421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
