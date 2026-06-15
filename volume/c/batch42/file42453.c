// fichero 42453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42453;

Registro42453 crear_registro42453(int id) {
    Registro42453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
