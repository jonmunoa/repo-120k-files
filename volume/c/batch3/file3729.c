// fichero 3729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3729;

Registro3729 crear_registro3729(int id) {
    Registro3729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
