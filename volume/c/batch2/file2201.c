// fichero 2201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2201;

Registro2201 crear_registro2201(int id) {
    Registro2201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
