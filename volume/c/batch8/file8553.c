// fichero 8553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8553;

Registro8553 crear_registro8553(int id) {
    Registro8553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
