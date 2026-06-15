// fichero 27005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27005;

Registro27005 crear_registro27005(int id) {
    Registro27005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
