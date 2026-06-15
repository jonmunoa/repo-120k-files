// fichero 42257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42257;

Registro42257 crear_registro42257(int id) {
    Registro42257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
