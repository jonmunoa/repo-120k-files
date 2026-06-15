// fichero 2529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2529;

Registro2529 crear_registro2529(int id) {
    Registro2529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
