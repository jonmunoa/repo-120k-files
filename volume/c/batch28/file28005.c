// fichero 28005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28005;

Registro28005 crear_registro28005(int id) {
    Registro28005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
