// fichero 21305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21305;

Registro21305 crear_registro21305(int id) {
    Registro21305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
