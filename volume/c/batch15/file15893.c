// fichero 15893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15893;

Registro15893 crear_registro15893(int id) {
    Registro15893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
