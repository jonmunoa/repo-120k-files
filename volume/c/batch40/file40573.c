// fichero 40573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40573;

Registro40573 crear_registro40573(int id) {
    Registro40573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
