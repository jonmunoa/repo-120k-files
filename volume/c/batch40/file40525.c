// fichero 40525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40525;

Registro40525 crear_registro40525(int id) {
    Registro40525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
