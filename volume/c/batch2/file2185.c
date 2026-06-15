// fichero 2185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2185;

Registro2185 crear_registro2185(int id) {
    Registro2185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
