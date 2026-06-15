// fichero 617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro617;

Registro617 crear_registro617(int id) {
    Registro617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
