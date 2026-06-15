// fichero 42289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42289;

Registro42289 crear_registro42289(int id) {
    Registro42289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
