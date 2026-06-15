// fichero 29961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29961;

Registro29961 crear_registro29961(int id) {
    Registro29961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
