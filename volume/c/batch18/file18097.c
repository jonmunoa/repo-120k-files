// fichero 18097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18097;

Registro18097 crear_registro18097(int id) {
    Registro18097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
