// fichero 6109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6109;

Registro6109 crear_registro6109(int id) {
    Registro6109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
