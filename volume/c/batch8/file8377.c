// fichero 8377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8377;

Registro8377 crear_registro8377(int id) {
    Registro8377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
