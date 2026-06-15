// fichero 42545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42545;

Registro42545 crear_registro42545(int id) {
    Registro42545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
