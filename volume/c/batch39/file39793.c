// fichero 39793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39793;

Registro39793 crear_registro39793(int id) {
    Registro39793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
