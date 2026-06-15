// fichero 45521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45521;

Registro45521 crear_registro45521(int id) {
    Registro45521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
