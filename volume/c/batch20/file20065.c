// fichero 20065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20065;

Registro20065 crear_registro20065(int id) {
    Registro20065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
