// fichero 30673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30673;

Registro30673 crear_registro30673(int id) {
    Registro30673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
