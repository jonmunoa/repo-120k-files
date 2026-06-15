// fichero 49617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49617;

Registro49617 crear_registro49617(int id) {
    Registro49617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
