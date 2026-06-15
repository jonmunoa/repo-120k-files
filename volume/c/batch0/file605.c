// fichero 605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro605;

Registro605 crear_registro605(int id) {
    Registro605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
