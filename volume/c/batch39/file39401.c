// fichero 39401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39401;

Registro39401 crear_registro39401(int id) {
    Registro39401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
