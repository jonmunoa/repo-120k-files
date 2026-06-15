// fichero 41413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41413;

Registro41413 crear_registro41413(int id) {
    Registro41413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
