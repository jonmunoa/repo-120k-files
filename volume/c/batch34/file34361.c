// fichero 34361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34361;

Registro34361 crear_registro34361(int id) {
    Registro34361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
