// fichero 1033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1033;

Registro1033 crear_registro1033(int id) {
    Registro1033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
