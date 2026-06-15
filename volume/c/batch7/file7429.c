// fichero 7429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7429;

Registro7429 crear_registro7429(int id) {
    Registro7429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
