// fichero 15545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15545;

Registro15545 crear_registro15545(int id) {
    Registro15545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
