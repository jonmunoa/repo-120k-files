// fichero 28485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28485;

Registro28485 crear_registro28485(int id) {
    Registro28485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
