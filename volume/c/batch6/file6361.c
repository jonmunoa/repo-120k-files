// fichero 6361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6361;

Registro6361 crear_registro6361(int id) {
    Registro6361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
