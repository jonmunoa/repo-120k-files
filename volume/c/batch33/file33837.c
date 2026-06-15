// fichero 33837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33837;

Registro33837 crear_registro33837(int id) {
    Registro33837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
