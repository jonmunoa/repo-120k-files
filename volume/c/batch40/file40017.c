// fichero 40017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40017;

Registro40017 crear_registro40017(int id) {
    Registro40017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
