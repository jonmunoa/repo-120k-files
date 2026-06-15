// fichero 26061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26061;

Registro26061 crear_registro26061(int id) {
    Registro26061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
