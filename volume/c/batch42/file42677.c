// fichero 42677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42677;

Registro42677 crear_registro42677(int id) {
    Registro42677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
