// fichero 16109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16109;

Registro16109 crear_registro16109(int id) {
    Registro16109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
