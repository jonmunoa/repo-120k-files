// fichero 11589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11589;

Registro11589 crear_registro11589(int id) {
    Registro11589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
