// fichero 49097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49097;

Registro49097 crear_registro49097(int id) {
    Registro49097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
