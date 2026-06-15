// fichero 2369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2369;

Registro2369 crear_registro2369(int id) {
    Registro2369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
