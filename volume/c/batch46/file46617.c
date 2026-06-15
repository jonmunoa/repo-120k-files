// fichero 46617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46617;

Registro46617 crear_registro46617(int id) {
    Registro46617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
