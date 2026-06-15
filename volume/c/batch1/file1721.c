// fichero 1721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1721;

Registro1721 crear_registro1721(int id) {
    Registro1721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
