// fichero 49725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49725;

Registro49725 crear_registro49725(int id) {
    Registro49725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
