// fichero 2261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2261;

Registro2261 crear_registro2261(int id) {
    Registro2261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
