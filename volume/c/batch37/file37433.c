// fichero 37433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37433;

Registro37433 crear_registro37433(int id) {
    Registro37433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
