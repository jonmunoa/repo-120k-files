// fichero 47813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47813;

Registro47813 crear_registro47813(int id) {
    Registro47813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
