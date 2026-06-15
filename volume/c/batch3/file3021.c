// fichero 3021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3021;

Registro3021 crear_registro3021(int id) {
    Registro3021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
