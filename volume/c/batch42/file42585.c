// fichero 42585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42585;

Registro42585 crear_registro42585(int id) {
    Registro42585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
