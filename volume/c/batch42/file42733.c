// fichero 42733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42733;

Registro42733 crear_registro42733(int id) {
    Registro42733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
