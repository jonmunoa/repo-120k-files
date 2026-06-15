// fichero 47857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47857;

Registro47857 crear_registro47857(int id) {
    Registro47857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
