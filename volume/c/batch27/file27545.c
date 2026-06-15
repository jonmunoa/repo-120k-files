// fichero 27545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27545;

Registro27545 crear_registro27545(int id) {
    Registro27545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
