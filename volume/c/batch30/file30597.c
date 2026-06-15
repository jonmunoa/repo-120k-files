// fichero 30597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30597;

Registro30597 crear_registro30597(int id) {
    Registro30597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
