// fichero 12325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12325;

Registro12325 crear_registro12325(int id) {
    Registro12325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
