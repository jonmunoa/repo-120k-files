// fichero 33597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33597;

Registro33597 crear_registro33597(int id) {
    Registro33597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
