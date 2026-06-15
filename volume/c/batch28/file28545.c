// fichero 28545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28545;

Registro28545 crear_registro28545(int id) {
    Registro28545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
