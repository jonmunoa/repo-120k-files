// fichero 49201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49201;

Registro49201 crear_registro49201(int id) {
    Registro49201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
