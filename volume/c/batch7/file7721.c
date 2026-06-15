// fichero 7721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7721;

Registro7721 crear_registro7721(int id) {
    Registro7721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
