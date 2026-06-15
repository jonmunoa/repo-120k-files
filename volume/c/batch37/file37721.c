// fichero 37721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37721;

Registro37721 crear_registro37721(int id) {
    Registro37721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
