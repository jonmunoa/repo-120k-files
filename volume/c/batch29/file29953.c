// fichero 29953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29953;

Registro29953 crear_registro29953(int id) {
    Registro29953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
