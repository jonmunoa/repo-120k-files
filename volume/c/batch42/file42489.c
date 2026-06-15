// fichero 42489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42489;

Registro42489 crear_registro42489(int id) {
    Registro42489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
