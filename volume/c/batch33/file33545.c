// fichero 33545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33545;

Registro33545 crear_registro33545(int id) {
    Registro33545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
