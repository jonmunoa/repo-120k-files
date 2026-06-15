// fichero 17085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17085;

Registro17085 crear_registro17085(int id) {
    Registro17085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
