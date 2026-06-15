// fichero 14021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14021;

Registro14021 crear_registro14021(int id) {
    Registro14021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
