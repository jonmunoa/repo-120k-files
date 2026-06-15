// fichero 42861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42861;

Registro42861 crear_registro42861(int id) {
    Registro42861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
