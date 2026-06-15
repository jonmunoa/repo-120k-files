// fichero 27861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27861;

Registro27861 crear_registro27861(int id) {
    Registro27861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
