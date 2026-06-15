// fichero 47405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47405;

Registro47405 crear_registro47405(int id) {
    Registro47405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
