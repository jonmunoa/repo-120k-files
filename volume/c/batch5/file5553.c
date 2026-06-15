// fichero 5553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5553;

Registro5553 crear_registro5553(int id) {
    Registro5553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
