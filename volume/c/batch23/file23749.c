// fichero 23749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23749;

Registro23749 crear_registro23749(int id) {
    Registro23749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
