// fichero 47185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47185;

Registro47185 crear_registro47185(int id) {
    Registro47185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
