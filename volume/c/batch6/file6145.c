// fichero 6145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6145;

Registro6145 crear_registro6145(int id) {
    Registro6145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
