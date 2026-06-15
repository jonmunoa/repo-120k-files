// fichero 20137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20137;

Registro20137 crear_registro20137(int id) {
    Registro20137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
