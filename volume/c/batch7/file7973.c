// fichero 7973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7973;

Registro7973 crear_registro7973(int id) {
    Registro7973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
