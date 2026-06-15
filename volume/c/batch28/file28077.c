// fichero 28077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28077;

Registro28077 crear_registro28077(int id) {
    Registro28077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
