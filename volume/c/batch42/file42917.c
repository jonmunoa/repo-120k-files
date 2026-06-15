// fichero 42917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42917;

Registro42917 crear_registro42917(int id) {
    Registro42917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
