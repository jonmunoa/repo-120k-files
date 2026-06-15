// fichero 6525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6525;

Registro6525 crear_registro6525(int id) {
    Registro6525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
