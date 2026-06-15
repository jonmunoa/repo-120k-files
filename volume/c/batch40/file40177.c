// fichero 40177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40177;

Registro40177 crear_registro40177(int id) {
    Registro40177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
