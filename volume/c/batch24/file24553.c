// fichero 24553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24553;

Registro24553 crear_registro24553(int id) {
    Registro24553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
