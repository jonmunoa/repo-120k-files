// fichero 1013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1013;

Registro1013 crear_registro1013(int id) {
    Registro1013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
