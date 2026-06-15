// fichero 39901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39901;

Registro39901 crear_registro39901(int id) {
    Registro39901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
