// fichero 10389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10389;

Registro10389 crear_registro10389(int id) {
    Registro10389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
