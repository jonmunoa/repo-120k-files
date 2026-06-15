// fichero 5053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5053;

Registro5053 crear_registro5053(int id) {
    Registro5053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
