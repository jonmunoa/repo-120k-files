// fichero 42761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42761;

Registro42761 crear_registro42761(int id) {
    Registro42761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
