// fichero 29225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29225;

Registro29225 crear_registro29225(int id) {
    Registro29225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
