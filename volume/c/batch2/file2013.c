// fichero 2013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2013;

Registro2013 crear_registro2013(int id) {
    Registro2013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
