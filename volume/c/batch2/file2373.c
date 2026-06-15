// fichero 2373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2373;

Registro2373 crear_registro2373(int id) {
    Registro2373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
