// fichero 17361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17361;

Registro17361 crear_registro17361(int id) {
    Registro17361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
