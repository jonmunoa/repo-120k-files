// fichero 1125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1125;

Registro1125 crear_registro1125(int id) {
    Registro1125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
