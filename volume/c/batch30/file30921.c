// fichero 30921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30921;

Registro30921 crear_registro30921(int id) {
    Registro30921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
