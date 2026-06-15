// fichero 40725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40725;

Registro40725 crear_registro40725(int id) {
    Registro40725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
