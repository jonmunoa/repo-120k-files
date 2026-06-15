// fichero 6389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6389;

Registro6389 crear_registro6389(int id) {
    Registro6389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
