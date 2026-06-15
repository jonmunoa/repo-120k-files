// fichero 26285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26285;

Registro26285 crear_registro26285(int id) {
    Registro26285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
