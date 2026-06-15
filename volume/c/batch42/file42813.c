// fichero 42813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42813;

Registro42813 crear_registro42813(int id) {
    Registro42813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
