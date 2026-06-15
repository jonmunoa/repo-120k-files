// fichero 22545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22545;

Registro22545 crear_registro22545(int id) {
    Registro22545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
