// fichero 3433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3433;

Registro3433 crear_registro3433(int id) {
    Registro3433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
