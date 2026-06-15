// fichero 23229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23229;

Registro23229 crear_registro23229(int id) {
    Registro23229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
