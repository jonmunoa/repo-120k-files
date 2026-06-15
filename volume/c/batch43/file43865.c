// fichero 43865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43865;

Registro43865 crear_registro43865(int id) {
    Registro43865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
