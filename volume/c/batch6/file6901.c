// fichero 6901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6901;

Registro6901 crear_registro6901(int id) {
    Registro6901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
