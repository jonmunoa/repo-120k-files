// fichero 33485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33485;

Registro33485 crear_registro33485(int id) {
    Registro33485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
