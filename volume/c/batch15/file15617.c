// fichero 15617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15617;

Registro15617 crear_registro15617(int id) {
    Registro15617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
