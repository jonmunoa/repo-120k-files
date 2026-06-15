// fichero 17761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17761;

Registro17761 crear_registro17761(int id) {
    Registro17761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
