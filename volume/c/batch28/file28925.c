// fichero 28925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28925;

Registro28925 crear_registro28925(int id) {
    Registro28925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
