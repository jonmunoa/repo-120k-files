// fichero 49361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49361;

Registro49361 crear_registro49361(int id) {
    Registro49361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
