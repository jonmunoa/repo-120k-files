// fichero 29325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29325;

Registro29325 crear_registro29325(int id) {
    Registro29325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
