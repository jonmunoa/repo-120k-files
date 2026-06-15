// fichero 2277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2277;

Registro2277 crear_registro2277(int id) {
    Registro2277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
