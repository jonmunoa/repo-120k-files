// fichero 29221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29221;

Registro29221 crear_registro29221(int id) {
    Registro29221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
