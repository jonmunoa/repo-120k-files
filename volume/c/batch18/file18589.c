// fichero 18589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18589;

Registro18589 crear_registro18589(int id) {
    Registro18589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
