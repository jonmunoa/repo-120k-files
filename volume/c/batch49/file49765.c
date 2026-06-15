// fichero 49765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49765;

Registro49765 crear_registro49765(int id) {
    Registro49765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
