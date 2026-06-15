// fichero 37321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37321;

Registro37321 crear_registro37321(int id) {
    Registro37321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
