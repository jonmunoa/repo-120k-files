// fichero 40605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40605;

Registro40605 crear_registro40605(int id) {
    Registro40605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
