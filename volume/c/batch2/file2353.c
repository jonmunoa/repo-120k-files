// fichero 2353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2353;

Registro2353 crear_registro2353(int id) {
    Registro2353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
