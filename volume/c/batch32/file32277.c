// fichero 32277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32277;

Registro32277 crear_registro32277(int id) {
    Registro32277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
