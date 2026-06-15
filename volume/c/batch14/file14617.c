// fichero 14617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14617;

Registro14617 crear_registro14617(int id) {
    Registro14617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
