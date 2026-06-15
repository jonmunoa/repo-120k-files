// fichero 42173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42173;

Registro42173 crear_registro42173(int id) {
    Registro42173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
