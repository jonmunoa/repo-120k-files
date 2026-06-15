// fichero 15497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15497;

Registro15497 crear_registro15497(int id) {
    Registro15497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
