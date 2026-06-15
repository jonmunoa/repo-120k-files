// fichero 23401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23401;

Registro23401 crear_registro23401(int id) {
    Registro23401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
