// fichero 5373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5373;

Registro5373 crear_registro5373(int id) {
    Registro5373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
