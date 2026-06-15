// fichero 14509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14509;

Registro14509 crear_registro14509(int id) {
    Registro14509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
