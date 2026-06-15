// fichero 21033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21033;

Registro21033 crear_registro21033(int id) {
    Registro21033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
