// fichero 21501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21501;

Registro21501 crear_registro21501(int id) {
    Registro21501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
