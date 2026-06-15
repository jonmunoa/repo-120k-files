// fichero 26865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26865;

Registro26865 crear_registro26865(int id) {
    Registro26865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
