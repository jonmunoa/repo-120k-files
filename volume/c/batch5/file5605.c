// fichero 5605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5605;

Registro5605 crear_registro5605(int id) {
    Registro5605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
