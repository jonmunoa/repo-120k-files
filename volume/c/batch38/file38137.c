// fichero 38137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38137;

Registro38137 crear_registro38137(int id) {
    Registro38137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
