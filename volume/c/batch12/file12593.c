// fichero 12593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12593;

Registro12593 crear_registro12593(int id) {
    Registro12593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
