// fichero 46485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46485;

Registro46485 crear_registro46485(int id) {
    Registro46485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
