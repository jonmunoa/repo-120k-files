// fichero 28893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28893;

Registro28893 crear_registro28893(int id) {
    Registro28893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
