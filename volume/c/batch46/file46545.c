// fichero 46545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46545;

Registro46545 crear_registro46545(int id) {
    Registro46545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
