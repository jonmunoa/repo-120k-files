// fichero 26429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26429;

Registro26429 crear_registro26429(int id) {
    Registro26429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
