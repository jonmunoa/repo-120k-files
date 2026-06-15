// fichero 46277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46277;

Registro46277 crear_registro46277(int id) {
    Registro46277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
