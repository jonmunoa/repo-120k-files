// fichero 42317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42317;

Registro42317 crear_registro42317(int id) {
    Registro42317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
