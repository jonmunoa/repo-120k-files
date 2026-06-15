// fichero 42501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42501;

Registro42501 crear_registro42501(int id) {
    Registro42501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
