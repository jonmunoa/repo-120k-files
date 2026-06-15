// fichero 5997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5997;

Registro5997 crear_registro5997(int id) {
    Registro5997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
