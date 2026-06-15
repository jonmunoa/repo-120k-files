// fichero 26929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26929;

Registro26929 crear_registro26929(int id) {
    Registro26929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
