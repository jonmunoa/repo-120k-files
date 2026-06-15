// fichero 1097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1097;

Registro1097 crear_registro1097(int id) {
    Registro1097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
