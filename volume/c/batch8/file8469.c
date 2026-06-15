// fichero 8469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8469;

Registro8469 crear_registro8469(int id) {
    Registro8469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
