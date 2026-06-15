// fichero 43369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43369;

Registro43369 crear_registro43369(int id) {
    Registro43369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
