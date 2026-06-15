// fichero 21197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21197;

Registro21197 crear_registro21197(int id) {
    Registro21197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
