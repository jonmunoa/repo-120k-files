// fichero 42713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42713;

Registro42713 crear_registro42713(int id) {
    Registro42713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
