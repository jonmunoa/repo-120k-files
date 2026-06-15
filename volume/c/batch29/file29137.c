// fichero 29137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29137;

Registro29137 crear_registro29137(int id) {
    Registro29137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
