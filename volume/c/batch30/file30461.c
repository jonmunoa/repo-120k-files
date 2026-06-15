// fichero 30461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30461;

Registro30461 crear_registro30461(int id) {
    Registro30461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
