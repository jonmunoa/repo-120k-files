// fichero 29273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29273;

Registro29273 crear_registro29273(int id) {
    Registro29273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
