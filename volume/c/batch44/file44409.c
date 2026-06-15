// fichero 44409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44409;

Registro44409 crear_registro44409(int id) {
    Registro44409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
