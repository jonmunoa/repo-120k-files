// fichero 29361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29361;

Registro29361 crear_registro29361(int id) {
    Registro29361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
