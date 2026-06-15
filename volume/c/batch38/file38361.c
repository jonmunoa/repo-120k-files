// fichero 38361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38361;

Registro38361 crear_registro38361(int id) {
    Registro38361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
