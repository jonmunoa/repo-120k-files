// fichero 33893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33893;

Registro33893 crear_registro33893(int id) {
    Registro33893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
