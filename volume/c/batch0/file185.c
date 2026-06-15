// fichero 185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro185;

Registro185 crear_registro185(int id) {
    Registro185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
