// fichero 46077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46077;

Registro46077 crear_registro46077(int id) {
    Registro46077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
