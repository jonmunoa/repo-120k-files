// fichero 4721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4721;

Registro4721 crear_registro4721(int id) {
    Registro4721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
