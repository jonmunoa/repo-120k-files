// fichero 14553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14553;

Registro14553 crear_registro14553(int id) {
    Registro14553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
