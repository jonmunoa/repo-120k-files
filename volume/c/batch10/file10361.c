// fichero 10361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10361;

Registro10361 crear_registro10361(int id) {
    Registro10361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
