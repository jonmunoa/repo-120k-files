// fichero 30577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30577;

Registro30577 crear_registro30577(int id) {
    Registro30577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
