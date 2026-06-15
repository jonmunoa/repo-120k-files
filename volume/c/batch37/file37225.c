// fichero 37225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37225;

Registro37225 crear_registro37225(int id) {
    Registro37225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
