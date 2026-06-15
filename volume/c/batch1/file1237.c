// fichero 1237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1237;

Registro1237 crear_registro1237(int id) {
    Registro1237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
