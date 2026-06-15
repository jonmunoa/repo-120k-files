// fichero 32685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32685;

Registro32685 crear_registro32685(int id) {
    Registro32685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
