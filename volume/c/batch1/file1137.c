// fichero 1137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1137;

Registro1137 crear_registro1137(int id) {
    Registro1137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
