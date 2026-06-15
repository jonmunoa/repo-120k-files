// fichero 33901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33901;

Registro33901 crear_registro33901(int id) {
    Registro33901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
