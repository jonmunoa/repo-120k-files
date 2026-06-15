// fichero 21861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21861;

Registro21861 crear_registro21861(int id) {
    Registro21861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
