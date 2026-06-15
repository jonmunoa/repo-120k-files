// fichero 2113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2113;

Registro2113 crear_registro2113(int id) {
    Registro2113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
