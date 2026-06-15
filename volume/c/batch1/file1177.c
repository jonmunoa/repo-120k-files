// fichero 1177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1177;

Registro1177 crear_registro1177(int id) {
    Registro1177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
