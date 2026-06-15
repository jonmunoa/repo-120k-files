// fichero 47137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47137;

Registro47137 crear_registro47137(int id) {
    Registro47137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
