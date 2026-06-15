// fichero 42557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42557;

Registro42557 crear_registro42557(int id) {
    Registro42557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
