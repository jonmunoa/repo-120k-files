// fichero 28117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28117;

Registro28117 crear_registro28117(int id) {
    Registro28117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
