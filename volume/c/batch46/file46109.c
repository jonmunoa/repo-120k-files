// fichero 46109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46109;

Registro46109 crear_registro46109(int id) {
    Registro46109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
