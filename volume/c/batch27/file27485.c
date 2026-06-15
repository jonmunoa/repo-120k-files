// fichero 27485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27485;

Registro27485 crear_registro27485(int id) {
    Registro27485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
