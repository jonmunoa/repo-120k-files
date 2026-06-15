// fichero 16021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16021;

Registro16021 crear_registro16021(int id) {
    Registro16021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
