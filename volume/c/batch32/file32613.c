// fichero 32613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32613;

Registro32613 crear_registro32613(int id) {
    Registro32613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
