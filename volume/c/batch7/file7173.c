// fichero 7173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7173;

Registro7173 crear_registro7173(int id) {
    Registro7173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
