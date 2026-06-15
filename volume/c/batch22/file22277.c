// fichero 22277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22277;

Registro22277 crear_registro22277(int id) {
    Registro22277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
