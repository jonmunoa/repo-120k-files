// fichero 49537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49537;

Registro49537 crear_registro49537(int id) {
    Registro49537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
