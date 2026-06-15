// fichero 26597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26597;

Registro26597 crear_registro26597(int id) {
    Registro26597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
