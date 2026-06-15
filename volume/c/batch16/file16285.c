// fichero 16285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16285;

Registro16285 crear_registro16285(int id) {
    Registro16285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
