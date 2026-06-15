// fichero 29369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29369;

Registro29369 crear_registro29369(int id) {
    Registro29369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
