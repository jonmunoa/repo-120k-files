// fichero 36401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36401;

Registro36401 crear_registro36401(int id) {
    Registro36401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
