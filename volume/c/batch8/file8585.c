// fichero 8585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8585;

Registro8585 crear_registro8585(int id) {
    Registro8585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
