// fichero 39749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39749;

Registro39749 crear_registro39749(int id) {
    Registro39749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
