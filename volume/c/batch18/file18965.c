// fichero 18965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18965;

Registro18965 crear_registro18965(int id) {
    Registro18965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
