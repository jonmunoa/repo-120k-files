// fichero 36389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36389;

Registro36389 crear_registro36389(int id) {
    Registro36389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
