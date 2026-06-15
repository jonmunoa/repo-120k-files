// fichero 2225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2225;

Registro2225 crear_registro2225(int id) {
    Registro2225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
