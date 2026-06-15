// fichero 11405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11405;

Registro11405 crear_registro11405(int id) {
    Registro11405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
