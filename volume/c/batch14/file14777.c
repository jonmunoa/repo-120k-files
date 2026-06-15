// fichero 14777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14777;

Registro14777 crear_registro14777(int id) {
    Registro14777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
