// fichero 47393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47393;

Registro47393 crear_registro47393(int id) {
    Registro47393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
