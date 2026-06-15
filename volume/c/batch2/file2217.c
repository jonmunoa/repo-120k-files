// fichero 2217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2217;

Registro2217 crear_registro2217(int id) {
    Registro2217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
