// fichero 34481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34481;

Registro34481 crear_registro34481(int id) {
    Registro34481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
