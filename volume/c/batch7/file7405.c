// fichero 7405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7405;

Registro7405 crear_registro7405(int id) {
    Registro7405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
