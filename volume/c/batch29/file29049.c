// fichero 29049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29049;

Registro29049 crear_registro29049(int id) {
    Registro29049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
