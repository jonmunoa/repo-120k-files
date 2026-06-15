// fichero 29233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29233;

Registro29233 crear_registro29233(int id) {
    Registro29233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
