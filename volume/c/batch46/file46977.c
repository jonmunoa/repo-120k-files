// fichero 46977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46977;

Registro46977 crear_registro46977(int id) {
    Registro46977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
