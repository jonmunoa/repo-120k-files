// fichero 17501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17501;

Registro17501 crear_registro17501(int id) {
    Registro17501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
