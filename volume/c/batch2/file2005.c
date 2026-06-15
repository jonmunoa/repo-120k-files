// fichero 2005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2005;

Registro2005 crear_registro2005(int id) {
    Registro2005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
