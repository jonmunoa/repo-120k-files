// fichero 24177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24177;

Registro24177 crear_registro24177(int id) {
    Registro24177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
