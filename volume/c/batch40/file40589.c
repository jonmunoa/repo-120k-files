// fichero 40589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40589;

Registro40589 crear_registro40589(int id) {
    Registro40589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
