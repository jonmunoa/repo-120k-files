// fichero 29293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29293;

Registro29293 crear_registro29293(int id) {
    Registro29293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
