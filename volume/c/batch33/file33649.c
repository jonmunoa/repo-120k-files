// fichero 33649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33649;

Registro33649 crear_registro33649(int id) {
    Registro33649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
