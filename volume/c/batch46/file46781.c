// fichero 46781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46781;

Registro46781 crear_registro46781(int id) {
    Registro46781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
