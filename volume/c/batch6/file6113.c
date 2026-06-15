// fichero 6113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6113;

Registro6113 crear_registro6113(int id) {
    Registro6113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
