// fichero 4393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4393;

Registro4393 crear_registro4393(int id) {
    Registro4393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
