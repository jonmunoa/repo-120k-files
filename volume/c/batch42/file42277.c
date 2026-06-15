// fichero 42277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42277;

Registro42277 crear_registro42277(int id) {
    Registro42277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
