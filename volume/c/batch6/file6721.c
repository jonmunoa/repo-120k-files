// fichero 6721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6721;

Registro6721 crear_registro6721(int id) {
    Registro6721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
