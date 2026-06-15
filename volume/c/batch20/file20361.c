// fichero 20361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20361;

Registro20361 crear_registro20361(int id) {
    Registro20361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
