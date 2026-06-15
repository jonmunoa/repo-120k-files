// fichero 24101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24101;

Registro24101 crear_registro24101(int id) {
    Registro24101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
