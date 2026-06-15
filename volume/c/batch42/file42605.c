// fichero 42605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42605;

Registro42605 crear_registro42605(int id) {
    Registro42605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
