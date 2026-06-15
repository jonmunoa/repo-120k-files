// fichero 18429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18429;

Registro18429 crear_registro18429(int id) {
    Registro18429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
