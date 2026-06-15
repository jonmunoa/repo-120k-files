// fichero 361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro361;

Registro361 crear_registro361(int id) {
    Registro361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
