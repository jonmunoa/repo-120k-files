// fichero 8337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8337;

Registro8337 crear_registro8337(int id) {
    Registro8337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
