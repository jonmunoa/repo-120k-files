// fichero 6561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6561;

Registro6561 crear_registro6561(int id) {
    Registro6561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
