// fichero 21405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21405;

Registro21405 crear_registro21405(int id) {
    Registro21405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
