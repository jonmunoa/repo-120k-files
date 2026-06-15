// fichero 26033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26033;

Registro26033 crear_registro26033(int id) {
    Registro26033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
