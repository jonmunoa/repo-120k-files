// fichero 28013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28013;

Registro28013 crear_registro28013(int id) {
    Registro28013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
