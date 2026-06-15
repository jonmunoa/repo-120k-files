// fichero 30097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30097;

Registro30097 crear_registro30097(int id) {
    Registro30097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
