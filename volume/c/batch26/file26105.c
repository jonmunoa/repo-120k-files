// fichero 26105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26105;

Registro26105 crear_registro26105(int id) {
    Registro26105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
