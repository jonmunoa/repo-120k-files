// fichero 12461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12461;

Registro12461 crear_registro12461(int id) {
    Registro12461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
