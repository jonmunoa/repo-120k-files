// fichero 28529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28529;

Registro28529 crear_registro28529(int id) {
    Registro28529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
