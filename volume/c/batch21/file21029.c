// fichero 21029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21029;

Registro21029 crear_registro21029(int id) {
    Registro21029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
