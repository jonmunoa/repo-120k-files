// fichero 26249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26249;

Registro26249 crear_registro26249(int id) {
    Registro26249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
