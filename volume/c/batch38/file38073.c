// fichero 38073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38073;

Registro38073 crear_registro38073(int id) {
    Registro38073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
