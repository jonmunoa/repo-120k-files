// fichero 18185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18185;

Registro18185 crear_registro18185(int id) {
    Registro18185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
