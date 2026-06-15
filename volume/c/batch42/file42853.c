// fichero 42853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42853;

Registro42853 crear_registro42853(int id) {
    Registro42853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
