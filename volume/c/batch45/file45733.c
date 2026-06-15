// fichero 45733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45733;

Registro45733 crear_registro45733(int id) {
    Registro45733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
