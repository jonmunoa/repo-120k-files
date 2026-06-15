// fichero 13893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13893;

Registro13893 crear_registro13893(int id) {
    Registro13893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
