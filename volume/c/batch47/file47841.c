// fichero 47841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47841;

Registro47841 crear_registro47841(int id) {
    Registro47841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
