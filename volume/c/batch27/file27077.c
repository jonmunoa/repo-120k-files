// fichero 27077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27077;

Registro27077 crear_registro27077(int id) {
    Registro27077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
