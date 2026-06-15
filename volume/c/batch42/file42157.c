// fichero 42157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42157;

Registro42157 crear_registro42157(int id) {
    Registro42157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
