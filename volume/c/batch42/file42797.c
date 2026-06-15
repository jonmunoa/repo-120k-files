// fichero 42797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42797;

Registro42797 crear_registro42797(int id) {
    Registro42797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
