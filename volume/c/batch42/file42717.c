// fichero 42717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42717;

Registro42717 crear_registro42717(int id) {
    Registro42717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
