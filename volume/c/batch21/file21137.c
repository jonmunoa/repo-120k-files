// fichero 21137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21137;

Registro21137 crear_registro21137(int id) {
    Registro21137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
