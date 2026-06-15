// fichero 3189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3189;

Registro3189 crear_registro3189(int id) {
    Registro3189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
