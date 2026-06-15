// fichero 26721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26721;

Registro26721 crear_registro26721(int id) {
    Registro26721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
