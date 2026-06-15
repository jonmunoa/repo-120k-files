// fichero 18137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18137;

Registro18137 crear_registro18137(int id) {
    Registro18137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
