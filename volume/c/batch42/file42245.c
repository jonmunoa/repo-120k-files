// fichero 42245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42245;

Registro42245 crear_registro42245(int id) {
    Registro42245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
