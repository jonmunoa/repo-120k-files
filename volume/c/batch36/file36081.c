// fichero 36081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36081;

Registro36081 crear_registro36081(int id) {
    Registro36081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
