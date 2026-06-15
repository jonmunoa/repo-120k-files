// fichero 16177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16177;

Registro16177 crear_registro16177(int id) {
    Registro16177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
