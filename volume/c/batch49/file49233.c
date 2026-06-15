// fichero 49233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49233;

Registro49233 crear_registro49233(int id) {
    Registro49233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
