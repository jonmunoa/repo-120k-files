// fichero 41245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41245;

Registro41245 crear_registro41245(int id) {
    Registro41245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
