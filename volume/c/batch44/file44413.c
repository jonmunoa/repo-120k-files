// fichero 44413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44413;

Registro44413 crear_registro44413(int id) {
    Registro44413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
