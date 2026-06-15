// fichero 42505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42505;

Registro42505 crear_registro42505(int id) {
    Registro42505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
