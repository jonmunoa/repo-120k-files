// fichero 3585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3585;

Registro3585 crear_registro3585(int id) {
    Registro3585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
