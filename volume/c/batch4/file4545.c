// fichero 4545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4545;

Registro4545 crear_registro4545(int id) {
    Registro4545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
