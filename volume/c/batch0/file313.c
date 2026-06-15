// fichero 313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro313;

Registro313 crear_registro313(int id) {
    Registro313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
