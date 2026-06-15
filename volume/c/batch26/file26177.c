// fichero 26177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26177;

Registro26177 crear_registro26177(int id) {
    Registro26177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
