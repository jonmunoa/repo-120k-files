// fichero 42885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42885;

Registro42885 crear_registro42885(int id) {
    Registro42885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
