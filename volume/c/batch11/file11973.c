// fichero 11973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11973;

Registro11973 crear_registro11973(int id) {
    Registro11973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
