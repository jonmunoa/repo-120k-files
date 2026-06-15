// fichero 29285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29285;

Registro29285 crear_registro29285(int id) {
    Registro29285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
