// fichero 42417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42417;

Registro42417 crear_registro42417(int id) {
    Registro42417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
