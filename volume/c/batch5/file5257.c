// fichero 5257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5257;

Registro5257 crear_registro5257(int id) {
    Registro5257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
