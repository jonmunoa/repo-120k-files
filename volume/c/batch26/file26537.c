// fichero 26537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26537;

Registro26537 crear_registro26537(int id) {
    Registro26537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
