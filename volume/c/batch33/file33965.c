// fichero 33965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33965;

Registro33965 crear_registro33965(int id) {
    Registro33965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
