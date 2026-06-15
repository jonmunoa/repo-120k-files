// fichero 30213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30213;

Registro30213 crear_registro30213(int id) {
    Registro30213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
