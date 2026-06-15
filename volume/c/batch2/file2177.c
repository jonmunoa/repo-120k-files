// fichero 2177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2177;

Registro2177 crear_registro2177(int id) {
    Registro2177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
