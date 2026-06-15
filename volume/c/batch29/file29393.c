// fichero 29393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29393;

Registro29393 crear_registro29393(int id) {
    Registro29393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
