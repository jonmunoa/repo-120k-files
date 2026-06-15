// fichero 11361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11361;

Registro11361 crear_registro11361(int id) {
    Registro11361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
