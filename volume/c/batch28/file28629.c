// fichero 28629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28629;

Registro28629 crear_registro28629(int id) {
    Registro28629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
