// fichero 1529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1529;

Registro1529 crear_registro1529(int id) {
    Registro1529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
