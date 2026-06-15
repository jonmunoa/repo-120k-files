// fichero 14013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14013;

Registro14013 crear_registro14013(int id) {
    Registro14013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
