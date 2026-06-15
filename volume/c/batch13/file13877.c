// fichero 13877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13877;

Registro13877 crear_registro13877(int id) {
    Registro13877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
