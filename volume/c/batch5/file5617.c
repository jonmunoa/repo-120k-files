// fichero 5617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5617;

Registro5617 crear_registro5617(int id) {
    Registro5617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
