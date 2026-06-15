// fichero 46125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46125;

Registro46125 crear_registro46125(int id) {
    Registro46125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
