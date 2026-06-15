// fichero 4425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4425;

Registro4425 crear_registro4425(int id) {
    Registro4425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
