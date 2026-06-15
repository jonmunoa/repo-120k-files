// fichero 21757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21757;

Registro21757 crear_registro21757(int id) {
    Registro21757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
