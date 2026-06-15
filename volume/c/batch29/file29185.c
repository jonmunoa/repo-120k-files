// fichero 29185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29185;

Registro29185 crear_registro29185(int id) {
    Registro29185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
