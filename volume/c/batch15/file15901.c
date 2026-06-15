// fichero 15901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15901;

Registro15901 crear_registro15901(int id) {
    Registro15901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
