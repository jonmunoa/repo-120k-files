// fichero 1017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1017;

Registro1017 crear_registro1017(int id) {
    Registro1017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
