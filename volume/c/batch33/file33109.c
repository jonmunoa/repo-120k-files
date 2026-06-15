// fichero 33109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33109;

Registro33109 crear_registro33109(int id) {
    Registro33109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
