// fichero 6133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6133;

Registro6133 crear_registro6133(int id) {
    Registro6133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
