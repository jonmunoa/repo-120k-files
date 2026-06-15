// fichero 29401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29401;

Registro29401 crear_registro29401(int id) {
    Registro29401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
