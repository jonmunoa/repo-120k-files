// fichero 27017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27017;

Registro27017 crear_registro27017(int id) {
    Registro27017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
