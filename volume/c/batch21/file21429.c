// fichero 21429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21429;

Registro21429 crear_registro21429(int id) {
    Registro21429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
