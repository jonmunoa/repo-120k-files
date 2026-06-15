// fichero 42433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42433;

Registro42433 crear_registro42433(int id) {
    Registro42433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
