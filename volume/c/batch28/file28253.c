// fichero 28253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28253;

Registro28253 crear_registro28253(int id) {
    Registro28253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
