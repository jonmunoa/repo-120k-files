// fichero 18901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18901;

Registro18901 crear_registro18901(int id) {
    Registro18901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
