// fichero 43485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43485;

Registro43485 crear_registro43485(int id) {
    Registro43485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
