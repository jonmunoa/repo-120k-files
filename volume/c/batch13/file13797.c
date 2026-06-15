// fichero 13797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13797;

Registro13797 crear_registro13797(int id) {
    Registro13797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
