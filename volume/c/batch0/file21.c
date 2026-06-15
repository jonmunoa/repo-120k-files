// fichero 21 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21;

Registro21 crear_registro21(int id) {
    Registro21 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
