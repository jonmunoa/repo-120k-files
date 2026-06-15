// fichero 38597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38597;

Registro38597 crear_registro38597(int id) {
    Registro38597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
