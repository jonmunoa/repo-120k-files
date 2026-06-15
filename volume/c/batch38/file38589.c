// fichero 38589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38589;

Registro38589 crear_registro38589(int id) {
    Registro38589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
