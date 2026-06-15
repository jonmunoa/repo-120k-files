// fichero 6429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6429;

Registro6429 crear_registro6429(int id) {
    Registro6429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
