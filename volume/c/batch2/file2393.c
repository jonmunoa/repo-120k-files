// fichero 2393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2393;

Registro2393 crear_registro2393(int id) {
    Registro2393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
