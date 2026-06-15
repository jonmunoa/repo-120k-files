// fichero 39965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39965;

Registro39965 crear_registro39965(int id) {
    Registro39965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
