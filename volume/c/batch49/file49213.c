// fichero 49213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49213;

Registro49213 crear_registro49213(int id) {
    Registro49213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
