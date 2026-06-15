// fichero 28397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28397;

Registro28397 crear_registro28397(int id) {
    Registro28397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
