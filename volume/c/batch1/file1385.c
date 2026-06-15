// fichero 1385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1385;

Registro1385 crear_registro1385(int id) {
    Registro1385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
