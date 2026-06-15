// fichero 46105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46105;

Registro46105 crear_registro46105(int id) {
    Registro46105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
