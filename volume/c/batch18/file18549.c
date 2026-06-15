// fichero 18549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18549;

Registro18549 crear_registro18549(int id) {
    Registro18549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
