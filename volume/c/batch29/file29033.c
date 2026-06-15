// fichero 29033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29033;

Registro29033 crear_registro29033(int id) {
    Registro29033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
