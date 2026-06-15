// fichero 18433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18433;

Registro18433 crear_registro18433(int id) {
    Registro18433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
