// fichero 7277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7277;

Registro7277 crear_registro7277(int id) {
    Registro7277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
