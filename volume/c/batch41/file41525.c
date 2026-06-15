// fichero 41525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41525;

Registro41525 crear_registro41525(int id) {
    Registro41525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
