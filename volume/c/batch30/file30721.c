// fichero 30721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30721;

Registro30721 crear_registro30721(int id) {
    Registro30721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
