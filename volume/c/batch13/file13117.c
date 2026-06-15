// fichero 13117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13117;

Registro13117 crear_registro13117(int id) {
    Registro13117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
