// fichero 13901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13901;

Registro13901 crear_registro13901(int id) {
    Registro13901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
