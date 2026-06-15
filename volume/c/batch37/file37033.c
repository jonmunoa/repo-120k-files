// fichero 37033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37033;

Registro37033 crear_registro37033(int id) {
    Registro37033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
