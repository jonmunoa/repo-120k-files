// fichero 20853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20853;

Registro20853 crear_registro20853(int id) {
    Registro20853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
