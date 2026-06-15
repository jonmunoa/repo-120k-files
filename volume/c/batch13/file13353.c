// fichero 13353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13353;

Registro13353 crear_registro13353(int id) {
    Registro13353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
