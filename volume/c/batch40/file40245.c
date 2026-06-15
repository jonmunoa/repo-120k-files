// fichero 40245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40245;

Registro40245 crear_registro40245(int id) {
    Registro40245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
