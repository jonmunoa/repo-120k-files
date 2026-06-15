// fichero 34589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34589;

Registro34589 crear_registro34589(int id) {
    Registro34589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
