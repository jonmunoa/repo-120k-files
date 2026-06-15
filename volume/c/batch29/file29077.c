// fichero 29077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29077;

Registro29077 crear_registro29077(int id) {
    Registro29077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
