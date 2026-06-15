// fichero 26945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26945;

Registro26945 crear_registro26945(int id) {
    Registro26945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
