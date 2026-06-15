// fichero 37977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37977;

Registro37977 crear_registro37977(int id) {
    Registro37977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
