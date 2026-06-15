// fichero 46565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46565;

Registro46565 crear_registro46565(int id) {
    Registro46565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
