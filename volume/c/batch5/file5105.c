// fichero 5105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5105;

Registro5105 crear_registro5105(int id) {
    Registro5105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
