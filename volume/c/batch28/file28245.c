// fichero 28245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28245;

Registro28245 crear_registro28245(int id) {
    Registro28245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
