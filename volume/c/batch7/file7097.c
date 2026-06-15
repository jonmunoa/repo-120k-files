// fichero 7097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7097;

Registro7097 crear_registro7097(int id) {
    Registro7097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
