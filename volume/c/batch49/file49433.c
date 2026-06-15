// fichero 49433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49433;

Registro49433 crear_registro49433(int id) {
    Registro49433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
