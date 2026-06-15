// fichero 33345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33345;

Registro33345 crear_registro33345(int id) {
    Registro33345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
