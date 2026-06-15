// fichero 5361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5361;

Registro5361 crear_registro5361(int id) {
    Registro5361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
