// fichero 44525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44525;

Registro44525 crear_registro44525(int id) {
    Registro44525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
