// fichero 42881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42881;

Registro42881 crear_registro42881(int id) {
    Registro42881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
