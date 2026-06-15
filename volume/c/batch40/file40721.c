// fichero 40721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40721;

Registro40721 crear_registro40721(int id) {
    Registro40721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
