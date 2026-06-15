// fichero 37317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37317;

Registro37317 crear_registro37317(int id) {
    Registro37317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
