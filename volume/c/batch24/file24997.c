// fichero 24997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24997;

Registro24997 crear_registro24997(int id) {
    Registro24997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
