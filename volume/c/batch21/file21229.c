// fichero 21229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21229;

Registro21229 crear_registro21229(int id) {
    Registro21229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
