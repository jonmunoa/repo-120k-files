// fichero 49861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49861;

Registro49861 crear_registro49861(int id) {
    Registro49861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
