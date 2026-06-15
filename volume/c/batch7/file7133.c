// fichero 7133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7133;

Registro7133 crear_registro7133(int id) {
    Registro7133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
