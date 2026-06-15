// fichero 20189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20189;

Registro20189 crear_registro20189(int id) {
    Registro20189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
