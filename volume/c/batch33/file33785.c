// fichero 33785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33785;

Registro33785 crear_registro33785(int id) {
    Registro33785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
