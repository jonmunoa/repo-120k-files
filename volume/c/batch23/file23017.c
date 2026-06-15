// fichero 23017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23017;

Registro23017 crear_registro23017(int id) {
    Registro23017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
