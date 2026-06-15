// fichero 28221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28221;

Registro28221 crear_registro28221(int id) {
    Registro28221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
