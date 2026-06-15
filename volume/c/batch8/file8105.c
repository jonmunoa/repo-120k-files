// fichero 8105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8105;

Registro8105 crear_registro8105(int id) {
    Registro8105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
