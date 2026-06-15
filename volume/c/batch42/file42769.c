// fichero 42769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42769;

Registro42769 crear_registro42769(int id) {
    Registro42769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
