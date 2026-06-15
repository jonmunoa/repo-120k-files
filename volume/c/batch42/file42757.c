// fichero 42757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42757;

Registro42757 crear_registro42757(int id) {
    Registro42757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
