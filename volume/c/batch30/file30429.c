// fichero 30429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30429;

Registro30429 crear_registro30429(int id) {
    Registro30429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
