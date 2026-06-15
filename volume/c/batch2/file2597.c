// fichero 2597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2597;

Registro2597 crear_registro2597(int id) {
    Registro2597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
