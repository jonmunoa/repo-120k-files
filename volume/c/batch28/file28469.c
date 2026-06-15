// fichero 28469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28469;

Registro28469 crear_registro28469(int id) {
    Registro28469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
