// fichero 28601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28601;

Registro28601 crear_registro28601(int id) {
    Registro28601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
