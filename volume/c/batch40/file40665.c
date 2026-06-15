// fichero 40665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40665;

Registro40665 crear_registro40665(int id) {
    Registro40665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
