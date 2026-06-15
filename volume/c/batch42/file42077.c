// fichero 42077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42077;

Registro42077 crear_registro42077(int id) {
    Registro42077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
