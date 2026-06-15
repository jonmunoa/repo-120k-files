// fichero 13429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13429;

Registro13429 crear_registro13429(int id) {
    Registro13429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
