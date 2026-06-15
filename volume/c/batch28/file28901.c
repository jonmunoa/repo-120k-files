// fichero 28901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28901;

Registro28901 crear_registro28901(int id) {
    Registro28901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
