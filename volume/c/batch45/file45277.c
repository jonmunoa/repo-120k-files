// fichero 45277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45277;

Registro45277 crear_registro45277(int id) {
    Registro45277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
