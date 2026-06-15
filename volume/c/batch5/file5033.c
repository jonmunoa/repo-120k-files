// fichero 5033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5033;

Registro5033 crear_registro5033(int id) {
    Registro5033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
