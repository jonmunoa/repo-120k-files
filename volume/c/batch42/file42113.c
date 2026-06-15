// fichero 42113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42113;

Registro42113 crear_registro42113(int id) {
    Registro42113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
