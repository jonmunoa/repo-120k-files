// fichero 43197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43197;

Registro43197 crear_registro43197(int id) {
    Registro43197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
