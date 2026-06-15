// fichero 17109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17109;

Registro17109 crear_registro17109(int id) {
    Registro17109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
