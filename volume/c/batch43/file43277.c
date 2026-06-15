// fichero 43277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43277;

Registro43277 crear_registro43277(int id) {
    Registro43277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
