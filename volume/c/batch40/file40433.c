// fichero 40433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40433;

Registro40433 crear_registro40433(int id) {
    Registro40433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
