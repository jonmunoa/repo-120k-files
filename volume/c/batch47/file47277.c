// fichero 47277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47277;

Registro47277 crear_registro47277(int id) {
    Registro47277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
