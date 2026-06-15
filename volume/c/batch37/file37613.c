// fichero 37613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37613;

Registro37613 crear_registro37613(int id) {
    Registro37613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
