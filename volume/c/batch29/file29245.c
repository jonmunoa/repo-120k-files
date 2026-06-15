// fichero 29245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29245;

Registro29245 crear_registro29245(int id) {
    Registro29245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
