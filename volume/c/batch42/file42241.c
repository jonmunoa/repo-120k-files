// fichero 42241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42241;

Registro42241 crear_registro42241(int id) {
    Registro42241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
