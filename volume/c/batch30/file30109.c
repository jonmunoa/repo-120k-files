// fichero 30109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30109;

Registro30109 crear_registro30109(int id) {
    Registro30109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
