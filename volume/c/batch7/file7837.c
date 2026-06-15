// fichero 7837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7837;

Registro7837 crear_registro7837(int id) {
    Registro7837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
