// fichero 26185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26185;

Registro26185 crear_registro26185(int id) {
    Registro26185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
