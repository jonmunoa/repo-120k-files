// fichero 47549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47549;

Registro47549 crear_registro47549(int id) {
    Registro47549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
