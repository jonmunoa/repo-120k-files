// fichero 26361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26361;

Registro26361 crear_registro26361(int id) {
    Registro26361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
