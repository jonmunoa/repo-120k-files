// fichero 17389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17389;

Registro17389 crear_registro17389(int id) {
    Registro17389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
