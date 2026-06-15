// fichero 6605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6605;

Registro6605 crear_registro6605(int id) {
    Registro6605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
