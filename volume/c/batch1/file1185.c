// fichero 1185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1185;

Registro1185 crear_registro1185(int id) {
    Registro1185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
