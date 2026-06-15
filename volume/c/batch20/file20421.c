// fichero 20421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20421;

Registro20421 crear_registro20421(int id) {
    Registro20421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
