// fichero 27853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27853;

Registro27853 crear_registro27853(int id) {
    Registro27853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
