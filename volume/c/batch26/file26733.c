// fichero 26733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26733;

Registro26733 crear_registro26733(int id) {
    Registro26733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
