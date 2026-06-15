// fichero 7041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7041;

Registro7041 crear_registro7041(int id) {
    Registro7041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
