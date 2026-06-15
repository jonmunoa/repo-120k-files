// fichero 34133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34133;

Registro34133 crear_registro34133(int id) {
    Registro34133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
