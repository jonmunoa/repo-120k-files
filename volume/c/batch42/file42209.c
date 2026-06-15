// fichero 42209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42209;

Registro42209 crear_registro42209(int id) {
    Registro42209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
