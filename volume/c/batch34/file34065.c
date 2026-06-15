// fichero 34065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34065;

Registro34065 crear_registro34065(int id) {
    Registro34065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
