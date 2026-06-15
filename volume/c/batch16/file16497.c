// fichero 16497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16497;

Registro16497 crear_registro16497(int id) {
    Registro16497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
