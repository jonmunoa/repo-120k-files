// fichero 48237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48237;

Registro48237 crear_registro48237(int id) {
    Registro48237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
