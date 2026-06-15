// fichero 37733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37733;

Registro37733 crear_registro37733(int id) {
    Registro37733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
