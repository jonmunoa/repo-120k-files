// fichero 33821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33821;

Registro33821 crear_registro33821(int id) {
    Registro33821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
