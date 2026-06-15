// fichero 29381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29381;

Registro29381 crear_registro29381(int id) {
    Registro29381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
