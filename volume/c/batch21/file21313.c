// fichero 21313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21313;

Registro21313 crear_registro21313(int id) {
    Registro21313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
