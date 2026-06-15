// fichero 34257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34257;

Registro34257 crear_registro34257(int id) {
    Registro34257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
