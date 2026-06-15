// fichero 47617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47617;

Registro47617 crear_registro47617(int id) {
    Registro47617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
