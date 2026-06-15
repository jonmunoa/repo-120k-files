// fichero 37157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37157;

Registro37157 crear_registro37157(int id) {
    Registro37157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
