// fichero 27857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27857;

Registro27857 crear_registro27857(int id) {
    Registro27857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
