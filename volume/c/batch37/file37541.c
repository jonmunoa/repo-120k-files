// fichero 37541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37541;

Registro37541 crear_registro37541(int id) {
    Registro37541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
