// fichero 8389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8389;

Registro8389 crear_registro8389(int id) {
    Registro8389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
