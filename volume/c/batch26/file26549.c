// fichero 26549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26549;

Registro26549 crear_registro26549(int id) {
    Registro26549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
