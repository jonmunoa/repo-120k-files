// fichero 27549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27549;

Registro27549 crear_registro27549(int id) {
    Registro27549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
