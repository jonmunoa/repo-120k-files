// fichero 7965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7965;

Registro7965 crear_registro7965(int id) {
    Registro7965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
