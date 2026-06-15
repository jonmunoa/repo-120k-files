// fichero 1005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1005;

Registro1005 crear_registro1005(int id) {
    Registro1005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
