// fichero 42601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42601;

Registro42601 crear_registro42601(int id) {
    Registro42601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
