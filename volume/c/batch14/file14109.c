// fichero 14109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14109;

Registro14109 crear_registro14109(int id) {
    Registro14109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
