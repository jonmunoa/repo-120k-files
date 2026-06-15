// fichero 49365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49365;

Registro49365 crear_registro49365(int id) {
    Registro49365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
