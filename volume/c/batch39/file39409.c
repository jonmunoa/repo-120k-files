// fichero 39409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39409;

Registro39409 crear_registro39409(int id) {
    Registro39409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
