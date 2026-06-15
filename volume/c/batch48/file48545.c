// fichero 48545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48545;

Registro48545 crear_registro48545(int id) {
    Registro48545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
