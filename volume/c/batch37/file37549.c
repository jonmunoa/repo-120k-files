// fichero 37549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37549;

Registro37549 crear_registro37549(int id) {
    Registro37549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
