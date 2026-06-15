// fichero 5129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5129;

Registro5129 crear_registro5129(int id) {
    Registro5129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
