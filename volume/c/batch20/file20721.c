// fichero 20721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20721;

Registro20721 crear_registro20721(int id) {
    Registro20721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
