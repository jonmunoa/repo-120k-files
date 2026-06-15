// fichero 8561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8561;

Registro8561 crear_registro8561(int id) {
    Registro8561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
