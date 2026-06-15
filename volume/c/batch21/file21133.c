// fichero 21133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21133;

Registro21133 crear_registro21133(int id) {
    Registro21133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
