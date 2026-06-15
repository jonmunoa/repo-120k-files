// fichero 1037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1037;

Registro1037 crear_registro1037(int id) {
    Registro1037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
