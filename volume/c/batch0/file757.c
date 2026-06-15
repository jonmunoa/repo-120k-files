// fichero 757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro757;

Registro757 crear_registro757(int id) {
    Registro757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
