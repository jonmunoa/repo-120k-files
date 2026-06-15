// fichero 36885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36885;

Registro36885 crear_registro36885(int id) {
    Registro36885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
