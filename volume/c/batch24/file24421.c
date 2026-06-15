// fichero 24421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24421;

Registro24421 crear_registro24421(int id) {
    Registro24421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
