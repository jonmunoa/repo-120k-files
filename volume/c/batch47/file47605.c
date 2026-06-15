// fichero 47605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47605;

Registro47605 crear_registro47605(int id) {
    Registro47605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
