// fichero 22485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22485;

Registro22485 crear_registro22485(int id) {
    Registro22485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
