// fichero 14221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14221;

Registro14221 crear_registro14221(int id) {
    Registro14221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
