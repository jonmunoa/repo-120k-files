// fichero 18721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18721;

Registro18721 crear_registro18721(int id) {
    Registro18721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
