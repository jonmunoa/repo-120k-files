// fichero 26437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26437;

Registro26437 crear_registro26437(int id) {
    Registro26437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
