// fichero 29565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29565;

Registro29565 crear_registro29565(int id) {
    Registro29565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
