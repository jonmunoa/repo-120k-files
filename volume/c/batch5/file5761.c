// fichero 5761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5761;

Registro5761 crear_registro5761(int id) {
    Registro5761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
