// fichero 8433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8433;

Registro8433 crear_registro8433(int id) {
    Registro8433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
