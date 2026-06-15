// fichero 26085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26085;

Registro26085 crear_registro26085(int id) {
    Registro26085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
