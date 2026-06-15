// fichero 21401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21401;

Registro21401 crear_registro21401(int id) {
    Registro21401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
