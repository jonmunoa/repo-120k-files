// fichero 32965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32965;

Registro32965 crear_registro32965(int id) {
    Registro32965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
