// fichero 545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro545;

Registro545 crear_registro545(int id) {
    Registro545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
