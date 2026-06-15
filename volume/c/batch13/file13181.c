// fichero 13181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13181;

Registro13181 crear_registro13181(int id) {
    Registro13181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
