// fichero 28493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28493;

Registro28493 crear_registro28493(int id) {
    Registro28493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
