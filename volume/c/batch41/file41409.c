// fichero 41409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41409;

Registro41409 crear_registro41409(int id) {
    Registro41409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
