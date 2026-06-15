// fichero 42249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42249;

Registro42249 crear_registro42249(int id) {
    Registro42249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
