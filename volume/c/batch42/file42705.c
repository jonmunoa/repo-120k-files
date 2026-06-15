// fichero 42705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42705;

Registro42705 crear_registro42705(int id) {
    Registro42705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
