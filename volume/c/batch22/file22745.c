// fichero 22745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22745;

Registro22745 crear_registro22745(int id) {
    Registro22745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
