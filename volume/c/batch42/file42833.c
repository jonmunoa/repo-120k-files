// fichero 42833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42833;

Registro42833 crear_registro42833(int id) {
    Registro42833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
