// fichero 38485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38485;

Registro38485 crear_registro38485(int id) {
    Registro38485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
