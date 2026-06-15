// fichero 47433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47433;

Registro47433 crear_registro47433(int id) {
    Registro47433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
