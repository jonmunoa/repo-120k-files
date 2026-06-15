// fichero 30081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30081;

Registro30081 crear_registro30081(int id) {
    Registro30081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
