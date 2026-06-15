// fichero 30805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30805;

Registro30805 crear_registro30805(int id) {
    Registro30805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
