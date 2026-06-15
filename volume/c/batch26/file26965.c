// fichero 26965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26965;

Registro26965 crear_registro26965(int id) {
    Registro26965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
