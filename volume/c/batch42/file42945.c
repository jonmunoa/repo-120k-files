// fichero 42945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42945;

Registro42945 crear_registro42945(int id) {
    Registro42945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
