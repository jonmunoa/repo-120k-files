// fichero 47589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47589;

Registro47589 crear_registro47589(int id) {
    Registro47589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
