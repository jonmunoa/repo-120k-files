// fichero 10005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10005;

Registro10005 crear_registro10005(int id) {
    Registro10005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
