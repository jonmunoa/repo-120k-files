// fichero 37105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37105;

Registro37105 crear_registro37105(int id) {
    Registro37105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
