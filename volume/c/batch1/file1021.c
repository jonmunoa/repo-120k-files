// fichero 1021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1021;

Registro1021 crear_registro1021(int id) {
    Registro1021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
