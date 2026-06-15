// fichero 18141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18141;

Registro18141 crear_registro18141(int id) {
    Registro18141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
