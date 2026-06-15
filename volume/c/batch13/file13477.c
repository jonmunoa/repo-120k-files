// fichero 13477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13477;

Registro13477 crear_registro13477(int id) {
    Registro13477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
