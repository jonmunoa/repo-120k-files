// fichero 14249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14249;

Registro14249 crear_registro14249(int id) {
    Registro14249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
