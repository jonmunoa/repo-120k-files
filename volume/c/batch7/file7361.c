// fichero 7361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7361;

Registro7361 crear_registro7361(int id) {
    Registro7361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
