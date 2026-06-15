// fichero 30653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30653;

Registro30653 crear_registro30653(int id) {
    Registro30653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
