// fichero 41357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41357;

Registro41357 crear_registro41357(int id) {
    Registro41357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
